#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRInput.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputOriginInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__SetActionManifestPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__SetActionManifestPath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__SetActionManifestPath::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3e470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__SetActionManifestPath.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__SetActionManifestPath::*)(::StringW)>(
    &::OVR::OpenVR::IVRInput__SetActionManifestPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__SetActionManifestPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__SetActionManifestPath::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__SetActionManifestPath::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__SetActionManifestPath.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__SetActionManifestPath::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__SetActionManifestPath::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__SetActionManifestPath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__SetActionManifestPath::Invoke(::StringW pchActionManifestPath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionManifestPath);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__SetActionManifestPath::BeginInvoke(::StringW pchActionManifestPath, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchActionManifestPath, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__SetActionManifestPath::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__SetActionManifestPath* OVR::OpenVR::IVRInput__SetActionManifestPath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__SetActionManifestPath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__SetActionManifestPath::IVRInput__SetActionManifestPath() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionSetHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetActionSetHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetActionSetHandle::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionSetHandle.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionSetHandle::*)(::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVRInput__GetActionSetHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionSetHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetActionSetHandle::*)(::StringW, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__GetActionSetHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3e5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionSetHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionSetHandle::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetActionSetHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetActionSetHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionSetHandle::Invoke(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionSetName, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetActionSetHandle::BeginInvoke(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchActionSetName, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionSetHandle::EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pHandle, result);
}
inline ::OVR::OpenVR::IVRInput__GetActionSetHandle* OVR::OpenVR::IVRInput__GetActionSetHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetActionSetHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetActionSetHandle::IVRInput__GetActionSetHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetActionHandle::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRInput__GetActionHandle::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionHandle.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionHandle::*)(::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVRInput__GetActionHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetActionHandle::*)(::StringW, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__GetActionHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3e6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionHandle::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetActionHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetActionHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionHandle::Invoke(::StringW pchActionName, ::by_ref<uint64_t> pHandle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionName, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetActionHandle::BeginInvoke(::StringW pchActionName, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchActionName, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionHandle::EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionHandle*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pHandle, result);
}
inline ::OVR::OpenVR::IVRInput__GetActionHandle* OVR::OpenVR::IVRInput__GetActionHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetActionHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetActionHandle::IVRInput__GetActionHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetInputSourceHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetInputSourceHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetInputSourceHandle::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetInputSourceHandle.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetInputSourceHandle::*)(::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVRInput__GetInputSourceHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetInputSourceHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetInputSourceHandle::*)(::StringW, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__GetInputSourceHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3e7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetInputSourceHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetInputSourceHandle::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetInputSourceHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetInputSourceHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetInputSourceHandle::Invoke(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchInputSourcePath, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetInputSourceHandle::BeginInvoke(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchInputSourcePath, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetInputSourceHandle::EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pHandle, result);
}
inline ::OVR::OpenVR::IVRInput__GetInputSourceHandle* OVR::OpenVR::IVRInput__GetInputSourceHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetInputSourceHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetInputSourceHandle::IVRInput__GetInputSourceHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__UpdateActionState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__UpdateActionState::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRInput__UpdateActionState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__UpdateActionState.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__UpdateActionState::*)(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint32_t,
                                                                                                                                    uint32_t)>(&::OVR::OpenVR::IVRInput__UpdateActionState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__UpdateActionState.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__UpdateActionState::*)(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint32_t,
                                                                                                                               uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__UpdateActionState::BeginInvoke)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e3e908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__UpdateActionState.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__UpdateActionState::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__UpdateActionState::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__UpdateActionState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__UpdateActionState::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                                                     uint32_t unSetCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__UpdateActionState::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                                                     uint32_t unSetCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__UpdateActionState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__UpdateActionState*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__UpdateActionState* OVR::OpenVR::IVRInput__UpdateActionState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__UpdateActionState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__UpdateActionState::IVRInput__UpdateActionState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetDigitalActionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetDigitalActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetDigitalActionData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3e9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetDigitalActionData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetDigitalActionData::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::IVRInput__GetDigitalActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetDigitalActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetDigitalActionData::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t,
                                                                                                                                  uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__GetDigitalActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e3ea20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetDigitalActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetDigitalActionData::*)(
    ::by_ref<::OVR::OpenVR::InputDigitalActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__GetDigitalActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3eafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetDigitalActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetDigitalActionData::Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                        uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetDigitalActionData::BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                        uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetDigitalActionData::EndInvoke(::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pActionData, result);
}
inline ::OVR::OpenVR::IVRInput__GetDigitalActionData* OVR::OpenVR::IVRInput__GetDigitalActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetDigitalActionData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetDigitalActionData::IVRInput__GetDigitalActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetAnalogActionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetAnalogActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetAnalogActionData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3eb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetAnalogActionData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetAnalogActionData::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::IVRInput__GetAnalogActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetAnalogActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetAnalogActionData::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t,
                                                                                                                                 uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__GetAnalogActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e3eba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetAnalogActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetAnalogActionData::*)(
    ::by_ref<::OVR::OpenVR::InputAnalogActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__GetAnalogActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3ec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetAnalogActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetAnalogActionData::Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                       uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetAnalogActionData::BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                       uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetAnalogActionData::EndInvoke(::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pActionData, result);
}
inline ::OVR::OpenVR::IVRInput__GetAnalogActionData* OVR::OpenVR::IVRInput__GetAnalogActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetAnalogActionData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetAnalogActionData::IVRInput__GetAnalogActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetPoseActionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetPoseActionData::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRInput__GetPoseActionData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3eca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetPoseActionData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetPoseActionData::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::by_ref<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::IVRInput__GetPoseActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ed0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetPoseActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetPoseActionData::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::by_ref<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t,
                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__GetPoseActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e3ed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetPoseActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetPoseActionData::*)(
    ::by_ref<::OVR::OpenVR::InputPoseActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__GetPoseActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3ee44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetPoseActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetPoseActionData::Invoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                                     ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                     uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetPoseActionData::BeginInvoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                                     ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice, callback,
                                                                      object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetPoseActionData::EndInvoke(::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetPoseActionData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pActionData, result);
}
inline ::OVR::OpenVR::IVRInput__GetPoseActionData* OVR::OpenVR::IVRInput__GetPoseActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetPoseActionData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetPoseActionData::IVRInput__GetPoseActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalActionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetSkeletalActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalActionData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalActionData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalActionData::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::IVRInput__GetSkeletalActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3eed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetSkeletalActionData::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>,
                                                                                                                                   uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e3eee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalActionData::*)(
    ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__GetSkeletalActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3efc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetSkeletalActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalActionData::Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                         uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetSkeletalActionData::BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                         uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalActionData::EndInvoke(::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pActionData, result);
}
inline ::OVR::OpenVR::IVRInput__GetSkeletalActionData* OVR::OpenVR::IVRInput__GetSkeletalActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetSkeletalActionData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetSkeletalActionData::IVRInput__GetSkeletalActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetSkeletalBoneData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3efe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalBoneData::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint32_t, uint64_t)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetSkeletalBoneData::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>,
                                                     uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__GetSkeletalBoneData::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e3f068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalBoneData::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetSkeletalBoneData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalBoneData::Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                       ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                                       ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount,
                                                                                       uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetSkeletalBoneData::BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                       ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                                       ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount,
                                                                                       uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice,
                                                                      callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalBoneData::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* OVR::OpenVR::IVRInput__GetSkeletalBoneData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetSkeletalBoneData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetSkeletalBoneData::IVRInput__GetSkeletalBoneData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>, uint64_t)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3f204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint32_t,
                                                               ::by_ref<uint32_t>, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5e3f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                                 ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData,
                                                                                                 uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize,
                                                                           punRequiredCompressedSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                                 ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData,
                                                                                                 uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize,
                                                                      ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::EndInvoke(::by_ref<uint32_t> punRequiredCompressedSize, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, punRequiredCompressedSize, result);
}
inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed::IVRInput__GetSkeletalBoneDataCompressed() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::*)(
    ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::*)(::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>,
                                                            uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e3f3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::*)(
    ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::Invoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                                              ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                                              ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray,
                                                                           unTransformArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::BeginInvoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                                              ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                                              ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray, unTransformArrayCount,
                                                                      callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::EndInvoke(::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, peTransformSpace, result);
}
inline ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData::IVRInput__DecompressSkeletalBoneData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t)>(
    &::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t,
                                                                                                                                          ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e3f578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency,
                                                                                                float_t fAmplitude, uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency,
                                                                                                float_t fAmplitude, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice, callback,
                                                                      object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction::IVRInput__TriggerHapticVibrationAction() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionOrigins._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetActionOrigins::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRInput__GetActionOrigins::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionOrigins.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionOrigins::*)(uint64_t, uint64_t, ::by_ref<::ArrayW<uint64_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRInput__GetActionOrigins::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionOrigins.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetActionOrigins::*)(uint64_t, uint64_t, ::by_ref<::ArrayW<uint64_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRInput__GetActionOrigins::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e3f6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetActionOrigins.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetActionOrigins::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetActionOrigins::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetActionOrigins::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionOrigins::Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::by_ref<::ArrayW<uint64_t>> originsOut,
                                                                                    uint32_t originOutCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetActionOrigins::BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::by_ref<::ArrayW<uint64_t>> originsOut,
                                                                                    uint32_t originOutCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut, originOutCount, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetActionOrigins::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetActionOrigins*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__GetActionOrigins* OVR::OpenVR::IVRInput__GetActionOrigins::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetActionOrigins*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetActionOrigins::IVRInput__GetActionOrigins() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginLocalizedName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetOriginLocalizedName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetOriginLocalizedName::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginLocalizedName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetOriginLocalizedName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRInput__GetOriginLocalizedName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginLocalizedName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetOriginLocalizedName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRInput__GetOriginLocalizedName::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3f820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginLocalizedName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetOriginLocalizedName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__GetOriginLocalizedName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetOriginLocalizedName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetOriginLocalizedName::Invoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, origin, pchNameArray, unNameArraySize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetOriginLocalizedName::BeginInvoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, origin, pchNameArray, unNameArraySize, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetOriginLocalizedName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* OVR::OpenVR::IVRInput__GetOriginLocalizedName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetOriginLocalizedName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetOriginLocalizedName::IVRInput__GetOriginLocalizedName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::InputOriginInfo_t>, uint32_t)>(&::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3f930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputOriginInfo_t>, uint32_t,
                                                                                                                                        ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e3f944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::*)(
    ::by_ref<::OVR::OpenVR::InputOriginInfo_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::Invoke(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::BeginInvoke(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::EndInvoke(::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pOriginInfo, result);
}
inline ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo::IVRInput__GetOriginTrackedDeviceInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowActionOrigins._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__ShowActionOrigins::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRInput__ShowActionOrigins::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowActionOrigins.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__ShowActionOrigins::*)(uint64_t, uint64_t)>(
    &::OVR::OpenVR::IVRInput__ShowActionOrigins::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowActionOrigins.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__ShowActionOrigins::*)(uint64_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__ShowActionOrigins::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e3faac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowActionOrigins.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__ShowActionOrigins::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__ShowActionOrigins::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__ShowActionOrigins::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__ShowActionOrigins::Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, actionSetHandle, ulActionHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__ShowActionOrigins::BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, actionSetHandle, ulActionHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__ShowActionOrigins::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__ShowActionOrigins* OVR::OpenVR::IVRInput__ShowActionOrigins::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__ShowActionOrigins*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__ShowActionOrigins::IVRInput__ShowActionOrigins() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3fb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::*)(
    ::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint32_t, uint32_t, uint64_t)>(&::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3fbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::*)(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint32_t,
                                                                                                                                      uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e3fbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3fc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRInput__ShowBindingsForActionSet::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__ShowBindingsForActionSet::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                                                            uint32_t unSetCount, uint64_t originToHighlight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRInput__ShowBindingsForActionSet::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                                                            uint32_t unSetCount, uint64_t originToHighlight, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput__ShowBindingsForActionSet::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* OVR::OpenVR::IVRInput__ShowBindingsForActionSet::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet::IVRInput__ShowBindingsForActionSet() {}
// Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "::OVR::OpenVR::IVRInput__SetActionManifestPath*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetActionSetHandle", ty:
// "::OVR::OpenVR::IVRInput__GetActionSetHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetActionHandle", ty: "::OVR::OpenVR::IVRInput__GetActionHandle*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetInputSourceHandle", ty: "::OVR::OpenVR::IVRInput__GetInputSourceHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "UpdateActionState",
// ty: "::OVR::OpenVR::IVRInput__UpdateActionState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDigitalActionData", ty: "::OVR::OpenVR::IVRInput__GetDigitalActionData*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetAnalogActionData", ty: "::OVR::OpenVR::IVRInput__GetAnalogActionData*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetPoseActionData", ty: "::OVR::OpenVR::IVRInput__GetPoseActionData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSkeletalActionData", ty:
// "::OVR::OpenVR::IVRInput__GetSkeletalActionData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSkeletalBoneData", ty: "::OVR::OpenVR::IVRInput__GetSkeletalBoneData*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetSkeletalBoneDataCompressed", ty: "::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "DecompressSkeletalBoneData", ty: "::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "TriggerHapticVibrationAction", ty:
// "::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetActionOrigins", ty: "::OVR::OpenVR::IVRInput__GetActionOrigins*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetOriginLocalizedName", ty: "::OVR::OpenVR::IVRInput__GetOriginLocalizedName*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOriginTrackedDeviceInfo", ty: "::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowActionOrigins", ty:
// "::OVR::OpenVR::IVRInput__ShowActionOrigins*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowBindingsForActionSet", ty: "::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRInput::IVRInput(::OVR::OpenVR::IVRInput__SetActionManifestPath* SetActionManifestPath, ::OVR::OpenVR::IVRInput__GetActionSetHandle* GetActionSetHandle,
                                            ::OVR::OpenVR::IVRInput__GetActionHandle* GetActionHandle, ::OVR::OpenVR::IVRInput__GetInputSourceHandle* GetInputSourceHandle,
                                            ::OVR::OpenVR::IVRInput__UpdateActionState* UpdateActionState, ::OVR::OpenVR::IVRInput__GetDigitalActionData* GetDigitalActionData,
                                            ::OVR::OpenVR::IVRInput__GetAnalogActionData* GetAnalogActionData, ::OVR::OpenVR::IVRInput__GetPoseActionData* GetPoseActionData,
                                            ::OVR::OpenVR::IVRInput__GetSkeletalActionData* GetSkeletalActionData, ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* GetSkeletalBoneData,
                                            ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed,
                                            ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* DecompressSkeletalBoneData,
                                            ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* TriggerHapticVibrationAction, ::OVR::OpenVR::IVRInput__GetActionOrigins* GetActionOrigins,
                                            ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* GetOriginLocalizedName, ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo,
                                            ::OVR::OpenVR::IVRInput__ShowActionOrigins* ShowActionOrigins, ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* ShowBindingsForActionSet) noexcept {
  this->SetActionManifestPath = SetActionManifestPath;
  this->GetActionSetHandle = GetActionSetHandle;
  this->GetActionHandle = GetActionHandle;
  this->GetInputSourceHandle = GetInputSourceHandle;
  this->UpdateActionState = UpdateActionState;
  this->GetDigitalActionData = GetDigitalActionData;
  this->GetAnalogActionData = GetAnalogActionData;
  this->GetPoseActionData = GetPoseActionData;
  this->GetSkeletalActionData = GetSkeletalActionData;
  this->GetSkeletalBoneData = GetSkeletalBoneData;
  this->GetSkeletalBoneDataCompressed = GetSkeletalBoneDataCompressed;
  this->DecompressSkeletalBoneData = DecompressSkeletalBoneData;
  this->TriggerHapticVibrationAction = TriggerHapticVibrationAction;
  this->GetActionOrigins = GetActionOrigins;
  this->GetOriginLocalizedName = GetOriginLocalizedName;
  this->GetOriginTrackedDeviceInfo = GetOriginTrackedDeviceInfo;
  this->ShowActionOrigins = ShowActionOrigins;
  this->ShowBindingsForActionSet = ShowBindingsForActionSet;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput::IVRInput() {}
