#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRInputSubsystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::XR::XRInputSubsystem*)>(&::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3612c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::XR::XRInputSubsystem_BindingsMarshaller::ConvertToNative(::UnityEngine::XR::XRInputSubsystem* xrInputSubsystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, xrInputSubsystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller::XRInputSubsystem_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.TryRecenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRInputSubsystem::*)()>(&::UnityEngine::XR::XRInputSubsystem::TryRecenter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e35b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "TryRecenter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.TrySetTrackingOriginMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRInputSubsystem::*)(::UnityEngine::XR::TrackingOriginModeFlags)>(
    &::UnityEngine::XR::XRInputSubsystem::TrySetTrackingOriginMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e35bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                                                           { "TrySetTrackingOriginMode", {}, { ::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.add_trackingOriginUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*)>(
    &::UnityEngine::XR::XRInputSubsystem::add_trackingOriginUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e35c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                             { "add_trackingOriginUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.remove_trackingOriginUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*)>(
    &::UnityEngine::XR::XRInputSubsystem::remove_trackingOriginUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e35d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                             { "remove_trackingOriginUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.add_boundaryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*)>(
    &::UnityEngine::XR::XRInputSubsystem::add_boundaryChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e35dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "add_boundaryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.remove_boundaryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*)>(
    &::UnityEngine::XR::XRInputSubsystem::remove_boundaryChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e35e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                             { "remove_boundaryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.InvokeTrackingOriginUpdatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e35f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "InvokeTrackingOriginUpdatedEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.InvokeBoundaryChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e36024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "InvokeBoundaryChangedEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)()>(&::UnityEngine::XR::XRInputSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e360f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.TryRecenter_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::XR::XRInputSubsystem::TryRecenter_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e35b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "TryRecenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.TrySetTrackingOriginMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::XR::TrackingOriginModeFlags)>(
    &::UnityEngine::XR::XRInputSubsystem::TrySetTrackingOriginMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e35c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                { "TrySetTrackingOriginMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_trackingOriginUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingOriginUpdated;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_trackingOriginUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingOriginUpdated;
}
constexpr void UnityEngine::XR::XRInputSubsystem::__cordl_internal_set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackingOriginUpdated = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_boundaryChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundaryChanged;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_boundaryChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundaryChanged;
}
constexpr void UnityEngine::XR::XRInputSubsystem::__cordl_internal_set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundaryChanged = value;
}
constexpr ::System::Collections::Generic::List_1<uint64_t>*& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_m_DeviceIdsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceIdsCache;
}
constexpr ::System::Collections::Generic::List_1<uint64_t>* const& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_m_DeviceIdsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceIdsCache;
}
constexpr void UnityEngine::XR::XRInputSubsystem::__cordl_internal_set_m_DeviceIdsCache(::System::Collections::Generic::List_1<uint64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceIdsCache = value;
}
inline bool UnityEngine::XR::XRInputSubsystem::TryRecenter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "TryRecenter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::XRInputSubsystem::TrySetTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags origin) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "TrySetTrackingOriginMode", {}, { ::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin);
}
inline void UnityEngine::XR::XRInputSubsystem::add_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                           { "add_trackingOriginUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::XRInputSubsystem::remove_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                                           { "remove_trackingOriginUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::XRInputSubsystem::add_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "add_boundaryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::XRInputSubsystem::remove_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "remove_boundaryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent(::System::IntPtr internalPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "InvokeTrackingOriginUpdatedEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, internalPtr);
}
inline void UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent(::System::IntPtr internalPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "InvokeBoundaryChangedEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, internalPtr);
}
inline void UnityEngine::XR::XRInputSubsystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::XRInputSubsystem::TryRecenter_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(), { "TryRecenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::XR::XRInputSubsystem::TrySetTrackingOriginMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::XR::TrackingOriginModeFlags origin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                                              { "TrySetTrackingOriginMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, origin);
}
inline ::UnityEngine::XR::XRInputSubsystem* UnityEngine::XR::XRInputSubsystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::XRInputSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRInputSubsystem::XRInputSubsystem() {}
