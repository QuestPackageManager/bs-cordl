#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVROverlay.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__FindOverlay::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e36cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVROverlay__FindOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::StringW, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__FindOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e36d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__FindOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__FindOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__FindOverlay::Invoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__FindOverlay::BeginInvoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback,
                                                                                 ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchOverlayKey, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__FindOverlay::EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__FindOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pOverlayHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__FindOverlay* OVR::OpenVR::IVROverlay__FindOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__FindOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__FindOverlay::IVROverlay__FindOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__CreateOverlay::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e36dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::StringW, ::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVROverlay__CreateOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::StringW, ::StringW, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__CreateOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e36e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__CreateOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CreateOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CreateOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateOverlay::EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pOverlayHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__CreateOverlay* OVR::OpenVR::IVROverlay__CreateOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__CreateOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CreateOverlay::IVROverlay__CreateOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__DestroyOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__DestroyOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__DestroyOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e36f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__DestroyOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__DestroyOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__DestroyOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__DestroyOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__DestroyOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__DestroyOverlay* OVR::OpenVR::IVROverlay__DestroyOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__DestroyOverlay::IVROverlay__DestroyOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e37060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e370b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetHighQualityOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetHighQualityOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* OVR::OpenVR::IVROverlay__SetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::IVROverlay__SetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e370d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)()>(&::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e37154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetHighQualityOverlay::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetHighQualityOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* OVR::OpenVR::IVROverlay__GetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::IVROverlay__GetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayKey::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayKey::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayKey::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e37214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(::by_ref<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayKey::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e372e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayKey::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayKey::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                               ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayKey::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                   ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayKey::EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayKey* OVR::OpenVR::IVROverlay__GetOverlayKey::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayKey::IVROverlay__GetOverlayKey() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e37384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(::by_ref<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayName::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                    ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayName::EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayName* OVR::OpenVR::IVROverlay__GetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayName::IVROverlay__GetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__SetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e374e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e374f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayName::Invoke(uint64_t ulOverlayHandle, ::StringW pchName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayName* OVR::OpenVR::IVROverlay__SetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayName::IVROverlay__SetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayImageData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(
    uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayImageData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e375e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>,
                                                                                                                                   ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayImageData::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e375f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(
    ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayImageData::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e376c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayImageData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayImageData::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth,
                                                                                           ::by_ref<uint32_t> punHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayImageData::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth,
                                                                                         ::by_ref<uint32_t> punHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayImageData::EndInvoke(::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, punWidth, punHeight, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayImageData* OVR::OpenVR::IVROverlay__GetOverlayImageData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayImageData::IVROverlay__GetOverlayImageData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e376f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3775c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e37770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e377f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::Invoke(::OVR::OpenVR::EVROverlayError error) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::IVROverlay__GetOverlayErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle, uint32_t unPID) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unPID);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, unPID, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::IVROverlay__SetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e379a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e379b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::IVROverlay__GetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__SetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e37ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFlag::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayFlag* OVR::OpenVR::IVROverlay__SetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayFlag::IVROverlay__SetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ::by_ref<bool>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ::by_ref<bool>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e37c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(::by_ref<bool>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlag::EndInvoke(::by_ref<bool> pbEnabled, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pbEnabled, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayFlag* OVR::OpenVR::IVROverlay__GetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayFlag::IVROverlay__GetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__SetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(uint64_t, float_t, float_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(uint64_t, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e37d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e37e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayColor::Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayColor* OVR::OpenVR::IVROverlay__SetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayColor::IVROverlay__SetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(
    uint64_t, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e37eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(uint64_t, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>,
                                                                                                                               ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e37ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(
    ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e37f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayColor::Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayColor::EndInvoke(::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue,
                                                                                          ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pfRed, pfGreen, pfBlue, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayColor* OVR::OpenVR::IVROverlay__GetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayColor::IVROverlay__GetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__SetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e37fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e38024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3809c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float_t fAlpha) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, fAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAlpha::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* OVR::OpenVR::IVROverlay__SetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayAlpha::IVROverlay__SetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e380c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(uint64_t, ::by_ref<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(uint64_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e38140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(::by_ref<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e381b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pfAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAlpha::EndInvoke(::by_ref<float_t> pfAlpha, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pfAlpha, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* OVR::OpenVR::IVROverlay__GetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayAlpha::IVROverlay__GetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e381dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e382d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, fTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::IVROverlay__SetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e382f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(uint64_t, ::by_ref<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(uint64_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e38378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(::by_ref<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e383f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pfTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::EndInvoke(::by_ref<float_t> pfTexelAspect, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pfTexelAspect, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::IVROverlay__GetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e38494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, unSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlaySortOrder::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* OVR::OpenVR::IVROverlay__SetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::IVROverlay__SetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(uint64_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(uint64_t, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e385b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, punSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlaySortOrder::EndInvoke(::by_ref<uint32_t> punSortOrder, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, punSortOrder, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* OVR::OpenVR::IVROverlay__GetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::IVROverlay__GetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e386b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e386cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, fWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::IVROverlay__SetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(uint64_t, ::by_ref<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e387d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(uint64_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e387e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(::by_ref<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::EndInvoke(::by_ref<float_t> pfWidthInMeters, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pfWidthInMeters, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::IVROverlay__GetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e388f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e38904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e389b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(
    uint64_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ::by_ref<float_t>, ::by_ref<float_t>,
                                                                                                                                                        ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e38a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::by_ref<float_t>, ::by_ref<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e38acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters,
                                                                                                                ::by_ref<float_t> pfMaxDistanceInMeters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters,
                                                                                                              ::by_ref<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pfMinDistanceInMeters, pfMaxDistanceInMeters, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e38b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::IVROverlay__SetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(uint64_t, ::by_ref<::OVR::OpenVR::EColorSpace>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(uint64_t, ::by_ref<::OVR::OpenVR::EColorSpace>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e38cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(
    ::by_ref<::OVR::OpenVR::EColorSpace>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::EndInvoke(::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, peTextureColorSpace, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::IVROverlay__GetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e38e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e38eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pOverlayTextureBounds, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::IVROverlay__SetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e38edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e38f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e38f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pOverlayTextureBounds, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::IVROverlay__GetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::HmdColor_t>, ::by_ref<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::HmdColor_t>, ::by_ref<::OVR::OpenVR::EVROverlayError>,
                                                         ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e390a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(
    ::by_ref<::OVR::OpenVR::HmdColor_t>, ::by_ref<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e391a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                       ::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                           ::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::by_ref<::OVR::OpenVR::EVROverlayError> pError,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderModel::EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pColor, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* OVR::OpenVR::IVROverlay__GetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::IVROverlay__GetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e391d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(uint64_t, ::StringW, ::by_ref<::OVR::OpenVR::HmdColor_t>)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(uint64_t, ::StringW, ::by_ref<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e39258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(
    ::by_ref<::OVR::OpenVR::HmdColor_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderModel::EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pColor, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* OVR::OpenVR::IVROverlay__SetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::IVROverlay__SetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformType::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3932c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::VROverlayTransformType>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayTransformType>,
                                                                                                                                       ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformType::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e393ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(
    ::by_ref<::OVR::OpenVR::VROverlayTransformType>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformType::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTransformType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformType::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, peTransformType, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformType::EndInvoke(::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, peTransformType, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* OVR::OpenVR::IVROverlay__GetOverlayTransformType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformType::IVROverlay__GetOverlayTransformType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e394e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e394f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e395d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                   ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                 ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pmatTrackingOriginToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::IVROverlay__SetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e395f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(uint64_t, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e39674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(
    ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e39750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                   ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                 ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::EndInvoke(::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                      ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::IVROverlay__GetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, uint32_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e397ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint32_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e39800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e398c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                                ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                              ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pmatTrackedDeviceToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::IVROverlay__SetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e398e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e39968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(
    ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e39a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice,
                                                                                                                ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice,
                                                                                                              ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::EndInvoke(::by_ref<uint32_t> punTrackedDevice,
                                                                                                                   ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::IVROverlay__GetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e39ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::IVROverlay__SetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(
    uint64_t, ::by_ref<uint32_t>, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ::by_ref<uint32_t>, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e39c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(
    ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex,
                                                                                                                 ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex,
                                                                                                               ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::EndInvoke(::by_ref<uint32_t> punDeviceIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, punDeviceIndex, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::IVROverlay__GetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(
    uint64_t, ::by_ref<uint64_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(uint64_t, ::by_ref<uint64_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e39d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(
    ::by_ref<uint64_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e39e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent,
                                                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent,
                                                                                                        ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::EndInvoke(::by_ref<uint64_t> ulOverlayHandleParent,
                                                                                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::IVROverlay__GetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(
    uint64_t, uint64_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e39eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e39f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                        ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pmatParentOverlayToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::IVROverlay__SetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__ShowOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e39f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__ShowOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowOverlay* OVR::OpenVR::IVROverlay__ShowOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ShowOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowOverlay::IVROverlay__ShowOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__HideOverlay::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__HideOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__HideOverlay::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__HideOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__HideOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__HideOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3a114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__HideOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__HideOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__HideOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__HideOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__HideOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__HideOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__HideOverlay* OVR::OpenVR::IVROverlay__HideOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__HideOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__HideOverlay::IVROverlay__HideOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsOverlayVisible::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__IsOverlayVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__IsOverlayVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3a20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__IsOverlayVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsOverlayVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsOverlayVisible::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsOverlayVisible::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsOverlayVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsOverlayVisible* OVR::OpenVR::IVROverlay__IsOverlayVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsOverlayVisible::IVROverlay__IsOverlayVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>,
                                                                     ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e3a304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                         ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                         ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                       ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                       ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pmatTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::IVROverlay__GetTransformForOverlayCoordinates() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(uint64_t, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(uint64_t, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e3a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(::by_ref<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__PollNextOverlayEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__PollNextOverlayEvent::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__PollNextOverlayEvent::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__PollNextOverlayEvent::EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* OVR::OpenVR::IVROverlay__PollNextOverlayEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::IVROverlay__PollNextOverlayEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayInputMethod>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayInputMethod>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(
    ::by_ref<::OVR::OpenVR::VROverlayInputMethod>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, peInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayInputMethod::EndInvoke(::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, peInputMethod, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* OVR::OpenVR::IVROverlay__GetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::IVROverlay__GetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3a764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayInputMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* OVR::OpenVR::IVROverlay__SetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::IVROverlay__SetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(
    ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3a954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayMouseScale::EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pvecMouseScale, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* OVR::OpenVR::IVROverlay__GetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::IVROverlay__GetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3a9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3a9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(
    ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayMouseScale::EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pvecMouseScale, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* OVR::OpenVR::IVROverlay__SetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::IVROverlay__SetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ab30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>,
                                                              ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e3ab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(
    ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                        ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle, pParams, pResults);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                                                ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pParams, pResults, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                           ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pParams, pResults, result);
}
inline ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::IVROverlay__ComputeOverlayIntersection() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3ac50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3acd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3ad24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::IVROverlay__IsHoverTargetOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3ad48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)()>(&::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3adb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3adc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3ade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::IVROverlay__GetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3ae04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3ae84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulNewFocusOverlay);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulNewFocusOverlay, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::IVROverlay__SetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3aefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e3af7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eDirection, ulFrom, ulTo);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eDirection, ulFrom, ulTo, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* OVR::OpenVR::IVROverlay__SetOverlayNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::IVROverlay__SetOverlayNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t)>(
    &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3b0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eDirection, ulFrom);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eDirection, ulFrom, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::IVROverlay__MoveGamepadFocusToNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e3b220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                     float_t fRadius) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                   float_t fRadius, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::IVROverlay__SetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<float_t>, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e3b39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(
    ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3b494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                     ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                   ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius,
                                                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pvCenter, pfRadius, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::IVROverlay__GetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(uint64_t, ::by_ref<::OVR::OpenVR::Texture_t>)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(uint64_t, ::by_ref<::OVR::OpenVR::Texture_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3b544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(::by_ref<::OVR::OpenVR::Texture_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pTexture, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexture::EndInvoke(::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pTexture, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTexture* OVR::OpenVR::IVROverlay__SetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTexture::IVROverlay__SetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3b690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ClearOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ClearOverlayTexture::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ClearOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ClearOverlayTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* OVR::OpenVR::IVROverlay__ClearOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ClearOverlayTexture::IVROverlay__ClearOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__SetOverlayRaw::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e3b788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRaw::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRaw::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRaw::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRaw* OVR::OpenVR::IVROverlay__SetOverlayRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRaw::IVROverlay__SetOverlayRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3b8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e3b8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3b948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayFromFile::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFromFile::Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchFilePath);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayFromFile::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pchFilePath, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFromFile::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* OVR::OpenVR::IVROverlay__SetOverlayFromFile::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayFromFile::IVROverlay__SetOverlayFromFile() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3b96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(
    uint64_t, ::by_ref<::System::IntPtr>, ::System::IntPtr, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::ETextureType>, ::by_ref<::OVR::OpenVR::EColorSpace>,
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3b9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(uint64_t, ::by_ref<::System::IntPtr>, ::System::IntPtr, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>,
                                                     ::by_ref<::OVR::OpenVR::ETextureType>, ::by_ref<::OVR::OpenVR::EColorSpace>, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*,
                                                     ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5e3b9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(
    ::by_ref<::System::IntPtr>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::ETextureType>, ::by_ref<::OVR::OpenVR::EColorSpace>,
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e3bb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                         ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat,
                                                                                         ::by_ref<::OVR::OpenVR::ETextureType> pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                         ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                             pAPIType, pColorSpace, pTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                       ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat,
                                                                                       ::by_ref<::OVR::OpenVR::ETextureType> pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                       ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType,
                                                                      pColorSpace, pTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexture::EndInvoke(::by_ref<::System::IntPtr> pNativeTextureHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight,
                                                                                            ::by_ref<uint32_t> pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType> pAPIType,
                                                                                            ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                                                            ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds,
                                                                             result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTexture* OVR::OpenVR::IVROverlay__GetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTexture::IVROverlay__GetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3bbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(uint64_t, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3bc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(uint64_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3bc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3bcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::IVROverlay__ReleaseNativeOverlayHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3bcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3bd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e3bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(
    ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3bdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureSize::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureSize::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureSize::EndInvoke(::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pWidth, pHeight, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* OVR::OpenVR::IVROverlay__GetOverlayTextureSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::IVROverlay__GetOverlayTextureSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3be20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(
    ::StringW, ::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(::StringW, ::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>,
                                                                                                                                      ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3beb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(
    ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CreateDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateDashboardOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle,
                                                                                              ::by_ref<uint64_t> pThumbnailHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CreateDashboardOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle,
                                                                                            ::by_ref<uint64_t> pThumbnailHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateDashboardOverlay::EndInvoke(::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pMainHandle, pThumbnailHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* OVR::OpenVR::IVROverlay__CreateDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::IVROverlay__CreateDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsDashboardVisible::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3bf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)()>(&::OVR::OpenVR::IVROverlay__IsDashboardVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3bfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__IsDashboardVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3bfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__IsDashboardVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3bff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsDashboardVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsDashboardVisible::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsDashboardVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsDashboardVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsDashboardVisible* OVR::OpenVR::IVROverlay__IsDashboardVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsDashboardVisible::IVROverlay__IsDashboardVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(uint64_t)>(&::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3c098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::IVROverlay__IsActiveDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, unProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::IVROverlay__SetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(uint64_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(uint64_t, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3c2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, punProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::EndInvoke(::by_ref<uint32_t> punProcessId, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, punProcessId, result);
}
inline ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::IVROverlay__GetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__ShowDashboard::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::StringW)>(&::OVR::OpenVR::IVROverlay__ShowDashboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowDashboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3c3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__ShowDashboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3c3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowDashboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__ShowDashboard::Invoke(::StringW pchOverlayToShow) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchOverlayToShow);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowDashboard::BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchOverlayToShow, callback, object);
}
inline void OVR::OpenVR::IVROverlay__ShowDashboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowDashboard*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowDashboard* OVR::OpenVR::IVROverlay__ShowDashboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ShowDashboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowDashboard::IVROverlay__ShowDashboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3c404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)()>(&::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3c480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::IVROverlay__GetPrimaryDashboardDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__ShowKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3c52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__ShowKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e3c544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboard::Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                                    bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                             uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowKeyboard::BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                                  bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue,
                                                                      callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowKeyboard* OVR::OpenVR::IVROverlay__ShowKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowKeyboard::IVROverlay__ShowKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(
    uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3c69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool,
                                                                                                                                      uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e3c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                              uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                             bUseMinimalMode, uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                            uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue,
                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                      bUseMinimalMode, uUserValue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::IVROverlay__ShowKeyboardForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetKeyboardText::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3c7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__GetKeyboardText::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetKeyboardText::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e3c84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetKeyboardText::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetKeyboardText::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetKeyboardText::Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchText, cchText);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetKeyboardText::BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchText, cchText, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetKeyboardText::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetKeyboardText* OVR::OpenVR::IVROverlay__GetKeyboardText::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetKeyboardText::IVROverlay__GetKeyboardText() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__HideKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)()>(&::OVR::OpenVR::IVROverlay__HideKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__HideKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__HideKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3c964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__HideKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__HideKeyboard::Invoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__HideKeyboard::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVROverlay__HideKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__HideKeyboard*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__HideKeyboard* OVR::OpenVR::IVROverlay__HideKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__HideKeyboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__HideKeyboard::IVROverlay__HideKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3cab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                  ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pmatTrackingOriginToKeyboardTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::IVROverlay__SetKeyboardTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3cb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3cbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ulOverlayHandle, avoidRect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, avoidRect, callback, object);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::IVROverlay__SetKeyboardPositionForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3cbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t, ::System::AsyncCallback*,
                                                              ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e3cc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(
    ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle,
                                                                                                  ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                  uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                     ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pMaskPrimitives, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::IVROverlay__SetOverlayIntersectionMask() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlags::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3cd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(uint64_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlags::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(uint64_t, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlags::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3cdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlags::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayFlags::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlags::Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayFlags::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pFlags, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlags::EndInvoke(::by_ref<uint32_t> pFlags, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pFlags, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayFlags* OVR::OpenVR::IVROverlay__GetOverlayFlags::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayFlags::IVROverlay__GetOverlayFlags() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3ce94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::IVROverlay__ShowMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW,
                                                                                                                                  ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3cf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::IVROverlay__ShowMessageOverlay::Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                                   ::StringW pchButton2Text, ::StringW pchButton3Text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowMessageOverlay::BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                        ::StringW pchButton2Text, ::StringW pchButton3Text, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback, object);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::IVROverlay__ShowMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* OVR::OpenVR::IVROverlay__ShowMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowMessageOverlay::IVROverlay__ShowMessageOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__CloseMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3cf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)()>(&::OVR::OpenVR::IVROverlay__CloseMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__CloseMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3cff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__CloseMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CloseMessageOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* OVR::OpenVR::IVROverlay__CloseMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CloseMessageOverlay::IVROverlay__CloseMessageOverlay() {}
// Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::IVROverlay__FindOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreateOverlay", ty:
// "::OVR::OpenVR::IVROverlay__CreateOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::IVROverlay__DestroyOverlay*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetHighQualityOverlay",
// ty: "::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayKey", ty: "::OVR::OpenVR::IVROverlay__GetOverlayKey*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::IVROverlay__GetOverlayName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayName", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayImageData", ty: "::OVR::OpenVR::IVROverlay__GetOverlayImageData*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRenderingPid", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayRenderingPid", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFlag*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlag*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayColor", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayColor", ty: "::OVR::OpenVR::IVROverlay__GetOverlayColor*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayAlpha", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlaySortOrder", ty: "::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlaySortOrder", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTextureColorSpace", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTextureBounds", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTextureBounds", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayRenderModel", ty: "::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRenderModel", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformType", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowOverlay*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::IVROverlay__HideOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsOverlayVisible", ty:
// "::OVR::OpenVR::IVROverlay__IsOverlayVisible*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
// "::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollNextOverlayEvent", ty:
// "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayMouseScale", ty: "::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayMouseScale", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComputeOverlayIntersection", ty:
// "::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsHoverTargetOverlay", ty: "::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetGamepadFocusOverlay", ty: "::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetGamepadFocusOverlay", ty: "::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayNeighbor", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "MoveGamepadFocusToNeighbor", ty:
// "::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayDualAnalogTransform", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayDualAnalogTransform", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexture*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__ClearOverlayTexture*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRaw", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRaw*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayFromFile", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayFromFile*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexture*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "ReleaseNativeOverlayHandle", ty: "::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayTextureSize", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreateDashboardOverlay", ty:
// "::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::IVROverlay__IsDashboardVisible*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDashboardOverlaySceneProcess", ty:
// "::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowDashboard", ty: "::OVR::OpenVR::IVROverlay__ShowDashboard*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetPrimaryDashboardDevice", ty: "::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ShowKeyboard", ty: "::OVR::OpenVR::IVROverlay__ShowKeyboard*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowKeyboardForOverlay", ty:
// "::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::IVROverlay__GetKeyboardText*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "HideKeyboard", ty: "::OVR::OpenVR::IVROverlay__HideKeyboard*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetKeyboardTransformAbsolute",
// ty: "::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetKeyboardPositionForOverlay", ty:
// "::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayIntersectionMask", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlags*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowMessageOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "CloseMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__CloseMessageOverlay*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay(
    ::OVR::OpenVR::IVROverlay__FindOverlay* FindOverlay, ::OVR::OpenVR::IVROverlay__CreateOverlay* CreateOverlay, ::OVR::OpenVR::IVROverlay__DestroyOverlay* DestroyOverlay,
    ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* SetHighQualityOverlay, ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* GetHighQualityOverlay,
    ::OVR::OpenVR::IVROverlay__GetOverlayKey* GetOverlayKey, ::OVR::OpenVR::IVROverlay__GetOverlayName* GetOverlayName, ::OVR::OpenVR::IVROverlay__SetOverlayName* SetOverlayName,
    ::OVR::OpenVR::IVROverlay__GetOverlayImageData* GetOverlayImageData, ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum,
    ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* SetOverlayRenderingPid, ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* GetOverlayRenderingPid,
    ::OVR::OpenVR::IVROverlay__SetOverlayFlag* SetOverlayFlag, ::OVR::OpenVR::IVROverlay__GetOverlayFlag* GetOverlayFlag, ::OVR::OpenVR::IVROverlay__SetOverlayColor* SetOverlayColor,
    ::OVR::OpenVR::IVROverlay__GetOverlayColor* GetOverlayColor, ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* SetOverlayAlpha, ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* GetOverlayAlpha,
    ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* SetOverlayTexelAspect, ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* GetOverlayTexelAspect,
    ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* SetOverlaySortOrder, ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* GetOverlaySortOrder,
    ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* SetOverlayWidthInMeters, ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* GetOverlayWidthInMeters,
    ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters,
    ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters, ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* SetOverlayTextureColorSpace,
    ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* GetOverlayTextureColorSpace, ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* SetOverlayTextureBounds,
    ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* GetOverlayTextureBounds, ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* GetOverlayRenderModel,
    ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* SetOverlayRenderModel, ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* GetOverlayTransformType,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* SetOverlayTransformAbsolute, ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* GetOverlayTransformAbsolute,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative, ::OVR::OpenVR::IVROverlay__ShowOverlay* ShowOverlay,
    ::OVR::OpenVR::IVROverlay__HideOverlay* HideOverlay, ::OVR::OpenVR::IVROverlay__IsOverlayVisible* IsOverlayVisible,
    ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates, ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* PollNextOverlayEvent,
    ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* GetOverlayInputMethod, ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* SetOverlayInputMethod,
    ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* GetOverlayMouseScale, ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* SetOverlayMouseScale,
    ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* ComputeOverlayIntersection, ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* IsHoverTargetOverlay,
    ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* GetGamepadFocusOverlay, ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* SetGamepadFocusOverlay,
    ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* SetOverlayNeighbor, ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor,
    ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform, ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform,
    ::OVR::OpenVR::IVROverlay__SetOverlayTexture* SetOverlayTexture, ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* ClearOverlayTexture, ::OVR::OpenVR::IVROverlay__SetOverlayRaw* SetOverlayRaw,
    ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* SetOverlayFromFile, ::OVR::OpenVR::IVROverlay__GetOverlayTexture* GetOverlayTexture,
    ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle, ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* GetOverlayTextureSize,
    ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* CreateDashboardOverlay, ::OVR::OpenVR::IVROverlay__IsDashboardVisible* IsDashboardVisible,
    ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* IsActiveDashboardOverlay, ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess,
    ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess, ::OVR::OpenVR::IVROverlay__ShowDashboard* ShowDashboard,
    ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* GetPrimaryDashboardDevice, ::OVR::OpenVR::IVROverlay__ShowKeyboard* ShowKeyboard,
    ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* ShowKeyboardForOverlay, ::OVR::OpenVR::IVROverlay__GetKeyboardText* GetKeyboardText, ::OVR::OpenVR::IVROverlay__HideKeyboard* HideKeyboard,
    ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute, ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay,
    ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* SetOverlayIntersectionMask, ::OVR::OpenVR::IVROverlay__GetOverlayFlags* GetOverlayFlags,
    ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* ShowMessageOverlay, ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* CloseMessageOverlay) noexcept {
  this->FindOverlay = FindOverlay;
  this->CreateOverlay = CreateOverlay;
  this->DestroyOverlay = DestroyOverlay;
  this->SetHighQualityOverlay = SetHighQualityOverlay;
  this->GetHighQualityOverlay = GetHighQualityOverlay;
  this->GetOverlayKey = GetOverlayKey;
  this->GetOverlayName = GetOverlayName;
  this->SetOverlayName = SetOverlayName;
  this->GetOverlayImageData = GetOverlayImageData;
  this->GetOverlayErrorNameFromEnum = GetOverlayErrorNameFromEnum;
  this->SetOverlayRenderingPid = SetOverlayRenderingPid;
  this->GetOverlayRenderingPid = GetOverlayRenderingPid;
  this->SetOverlayFlag = SetOverlayFlag;
  this->GetOverlayFlag = GetOverlayFlag;
  this->SetOverlayColor = SetOverlayColor;
  this->GetOverlayColor = GetOverlayColor;
  this->SetOverlayAlpha = SetOverlayAlpha;
  this->GetOverlayAlpha = GetOverlayAlpha;
  this->SetOverlayTexelAspect = SetOverlayTexelAspect;
  this->GetOverlayTexelAspect = GetOverlayTexelAspect;
  this->SetOverlaySortOrder = SetOverlaySortOrder;
  this->GetOverlaySortOrder = GetOverlaySortOrder;
  this->SetOverlayWidthInMeters = SetOverlayWidthInMeters;
  this->GetOverlayWidthInMeters = GetOverlayWidthInMeters;
  this->SetOverlayAutoCurveDistanceRangeInMeters = SetOverlayAutoCurveDistanceRangeInMeters;
  this->GetOverlayAutoCurveDistanceRangeInMeters = GetOverlayAutoCurveDistanceRangeInMeters;
  this->SetOverlayTextureColorSpace = SetOverlayTextureColorSpace;
  this->GetOverlayTextureColorSpace = GetOverlayTextureColorSpace;
  this->SetOverlayTextureBounds = SetOverlayTextureBounds;
  this->GetOverlayTextureBounds = GetOverlayTextureBounds;
  this->GetOverlayRenderModel = GetOverlayRenderModel;
  this->SetOverlayRenderModel = SetOverlayRenderModel;
  this->GetOverlayTransformType = GetOverlayTransformType;
  this->SetOverlayTransformAbsolute = SetOverlayTransformAbsolute;
  this->GetOverlayTransformAbsolute = GetOverlayTransformAbsolute;
  this->SetOverlayTransformTrackedDeviceRelative = SetOverlayTransformTrackedDeviceRelative;
  this->GetOverlayTransformTrackedDeviceRelative = GetOverlayTransformTrackedDeviceRelative;
  this->SetOverlayTransformTrackedDeviceComponent = SetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformTrackedDeviceComponent = GetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformOverlayRelative = GetOverlayTransformOverlayRelative;
  this->SetOverlayTransformOverlayRelative = SetOverlayTransformOverlayRelative;
  this->ShowOverlay = ShowOverlay;
  this->HideOverlay = HideOverlay;
  this->IsOverlayVisible = IsOverlayVisible;
  this->GetTransformForOverlayCoordinates = GetTransformForOverlayCoordinates;
  this->PollNextOverlayEvent = PollNextOverlayEvent;
  this->GetOverlayInputMethod = GetOverlayInputMethod;
  this->SetOverlayInputMethod = SetOverlayInputMethod;
  this->GetOverlayMouseScale = GetOverlayMouseScale;
  this->SetOverlayMouseScale = SetOverlayMouseScale;
  this->ComputeOverlayIntersection = ComputeOverlayIntersection;
  this->IsHoverTargetOverlay = IsHoverTargetOverlay;
  this->GetGamepadFocusOverlay = GetGamepadFocusOverlay;
  this->SetGamepadFocusOverlay = SetGamepadFocusOverlay;
  this->SetOverlayNeighbor = SetOverlayNeighbor;
  this->MoveGamepadFocusToNeighbor = MoveGamepadFocusToNeighbor;
  this->SetOverlayDualAnalogTransform = SetOverlayDualAnalogTransform;
  this->GetOverlayDualAnalogTransform = GetOverlayDualAnalogTransform;
  this->SetOverlayTexture = SetOverlayTexture;
  this->ClearOverlayTexture = ClearOverlayTexture;
  this->SetOverlayRaw = SetOverlayRaw;
  this->SetOverlayFromFile = SetOverlayFromFile;
  this->GetOverlayTexture = GetOverlayTexture;
  this->ReleaseNativeOverlayHandle = ReleaseNativeOverlayHandle;
  this->GetOverlayTextureSize = GetOverlayTextureSize;
  this->CreateDashboardOverlay = CreateDashboardOverlay;
  this->IsDashboardVisible = IsDashboardVisible;
  this->IsActiveDashboardOverlay = IsActiveDashboardOverlay;
  this->SetDashboardOverlaySceneProcess = SetDashboardOverlaySceneProcess;
  this->GetDashboardOverlaySceneProcess = GetDashboardOverlaySceneProcess;
  this->ShowDashboard = ShowDashboard;
  this->GetPrimaryDashboardDevice = GetPrimaryDashboardDevice;
  this->ShowKeyboard = ShowKeyboard;
  this->ShowKeyboardForOverlay = ShowKeyboardForOverlay;
  this->GetKeyboardText = GetKeyboardText;
  this->HideKeyboard = HideKeyboard;
  this->SetKeyboardTransformAbsolute = SetKeyboardTransformAbsolute;
  this->SetKeyboardPositionForOverlay = SetKeyboardPositionForOverlay;
  this->SetOverlayIntersectionMask = SetOverlayIntersectionMask;
  this->GetOverlayFlags = GetOverlayFlags;
  this->ShowMessageOverlay = ShowMessageOverlay;
  this->CloseMessageOverlay = CloseMessageOverlay;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay() {}
